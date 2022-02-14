
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkio {scalar_t__ enabled; scalar_t__ delay_counter; int updated; scalar_t__ Write; scalar_t__ Read; int filename; } ;
typedef int procfile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline void FUNC_8(struct blkio *VAR_6, unsigned int VAR_7) {
    if(FUNC_7(VAR_6->enabled == VAR_0 && VAR_6->delay_counter > 0)) {
            VAR_6->delay_counter--;
            return;
        }

        if(FUNC_1(VAR_6->filename)) {
            static procfile *VAR_8 = ((void*)0);

            VAR_8 = FUNC_5(VAR_8, VAR_6->filename, ((void*)0), VAR_2);
            if(FUNC_7(!VAR_8)) {
                VAR_6->updated = 0;
                VAR_4 = 1;
                return;
            }

            VAR_8 = FUNC_4(VAR_8);
            if(FUNC_7(!VAR_8)) {
                VAR_6->updated = 0;
                VAR_4 = 1;
                return;
            }

            unsigned long VAR_9, VAR_10 = FUNC_2(VAR_8);

            if (FUNC_7(VAR_10 < 1)) {
                FUNC_0("CGROUP: file '%s' should have 1+ lines.", VAR_6->filename);
                VAR_6->updated = 0;
                return;
            }

            VAR_6->Read = 0;
            VAR_6->Write = 0;

            for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
                VAR_6->Read += FUNC_6(FUNC_3(VAR_8, VAR_9, 2 + VAR_7));
                VAR_6->Write += FUNC_6(FUNC_3(VAR_8, VAR_9, 4 + VAR_7));
            }

            VAR_6->updated = 1;

            if(FUNC_7(VAR_6->enabled == VAR_0)) {
                if(FUNC_7(VAR_6->Read || VAR_6->Write || VAR_5 == VAR_1))
                    VAR_6->enabled = VAR_1;
                else
                    VAR_6->delay_counter = VAR_3;
            }
        }
}

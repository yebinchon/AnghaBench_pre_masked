
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct blkio {scalar_t__ enabled; scalar_t__ delay_counter; int updated; scalar_t__ Write; scalar_t__ Read; int filename; } ;
typedef int procfile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 unsigned long FUNC_2 (int *) ;
 char* FUNC_3 (int *,unsigned long,int) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline void FUNC_10(struct blkio *VAR_8) {
    if(FUNC_9(VAR_8->enabled == VAR_0 && VAR_8->delay_counter > 0)) {
        VAR_8->delay_counter--;
        return;
    }

    if(FUNC_1(VAR_8->filename)) {
        static procfile *VAR_9 = ((void*)0);

        VAR_9 = FUNC_5(VAR_9, VAR_8->filename, ((void*)0), VAR_2);
        if(FUNC_9(!VAR_9)) {
            VAR_8->updated = 0;
            VAR_6 = 1;
            return;
        }

        VAR_9 = FUNC_4(VAR_9);
        if(FUNC_9(!VAR_9)) {
            VAR_8->updated = 0;
            VAR_6 = 1;
            return;
        }

        unsigned long VAR_10, VAR_11 = FUNC_2(VAR_9);

        if(FUNC_9(VAR_11 < 1)) {
            FUNC_0("CGROUP: file '%s' should have 1+ lines.", VAR_8->filename);
            VAR_8->updated = 0;
            return;
        }

        VAR_8->Read = 0;
        VAR_8->Write = 0;






        for(VAR_10 = 0; VAR_10 < VAR_11 ; VAR_10++) {
            char *VAR_12 = FUNC_3(VAR_9, VAR_10, 1);
            uint32_t VAR_13 = FUNC_6(VAR_12);

            if(FUNC_9(VAR_13 == VAR_3 && !FUNC_8(VAR_12, "Read")))
                VAR_8->Read += FUNC_7(FUNC_3(VAR_9, VAR_10, 2));

            else if(FUNC_9(VAR_13 == VAR_4 && !FUNC_8(VAR_12, "Write")))
                VAR_8->Write += FUNC_7(FUNC_3(VAR_9, VAR_10, 2));
        }

        VAR_8->updated = 1;

        if(FUNC_9(VAR_8->enabled == VAR_0)) {
            if(FUNC_9(VAR_8->Read || VAR_8->Write || VAR_7 == VAR_1))
                VAR_8->enabled = VAR_1;
            else
                VAR_8->delay_counter = VAR_5;
        }
    }
}

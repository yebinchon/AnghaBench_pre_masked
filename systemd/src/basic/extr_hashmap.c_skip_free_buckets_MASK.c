
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dib_raw_t ;
typedef int HashmapBase ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static unsigned FUNC_2(HashmapBase *VAR_2, unsigned VAR_3) {
        dib_raw_t *VAR_4;

        VAR_4 = FUNC_0(VAR_2);

        for ( ; VAR_3 < FUNC_1(VAR_2); VAR_3++)
                if (VAR_4[VAR_3] != VAR_0)
                        return VAR_3;

        return VAR_1;
}

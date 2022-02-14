
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,void*,unsigned long) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*,int,unsigned long,int *) ;
 int FUNC_5 (char*,char const*,...) ;

int FUNC_6(const char* VAR_2,void*VAR_3,unsigned long VAR_4,unsigned long* VAR_5)
{
   unsigned long VAR_6=0;
   int VAR_7=VAR_1;
   FILE * VAR_8 = FUNC_0(VAR_2,"rb");

   unsigned long VAR_9 = 0;
   unsigned long VAR_10 = 0;
   if (VAR_8==((void*)0))
   {
       VAR_7 = VAR_0;
   }

    if (VAR_7 == VAR_1)
        do
        {
            VAR_7 = VAR_1;
            VAR_9 = (int)FUNC_4(VAR_3,1,VAR_4,VAR_8);
            if (VAR_9 < VAR_4)
                if (FUNC_3(VAR_8)==0)
            {
                FUNC_5("error in reading %s\n",VAR_2);
                VAR_7 = VAR_0;
            }

            if (VAR_9>0)
                VAR_6 = FUNC_1(VAR_6,VAR_3,VAR_9);
            VAR_10 += VAR_9;

        } while ((VAR_7 == VAR_1) && (VAR_9>0));

    if (VAR_8)
        FUNC_2(VAR_8);

    *VAR_5=VAR_6;
    FUNC_5("file %s crc %lx\n", VAR_2, VAR_6);
    return VAR_7;
}

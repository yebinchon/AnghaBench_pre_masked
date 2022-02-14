
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * AT91PS_DataFlash ;


 int FUNC_0 (int *,unsigned char*,unsigned int,unsigned int) ;
 int * FUNC_1 (int *,unsigned int*) ;
 int VAR_0 ;

int FUNC_2(unsigned long VAR_1, unsigned int VAR_2,
                    unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 AT91PS_DataFlash VAR_5 = &VAR_0;

 VAR_5 = FUNC_1(VAR_5, &VAR_4);
 if (VAR_4 == -1)
  return -1;

 return FUNC_0(VAR_5, (unsigned char *) VAR_2, VAR_4, VAR_3);
}

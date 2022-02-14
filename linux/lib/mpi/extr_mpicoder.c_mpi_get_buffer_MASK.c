
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int MPI ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,unsigned int,unsigned int*,int*) ;

void *FUNC_4(MPI VAR_1, unsigned *VAR_2, int *VAR_3)
{
 uint8_t *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_2)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_1);

 if (!VAR_5)
  VAR_5++;

 VAR_4 = FUNC_1(VAR_5, VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_5, VAR_2, VAR_3);

 if (VAR_6) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef scalar_t__ toff_t ;
typedef scalar_t__ tmsize_t ;
typedef int thandle_t ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 void* FUNC_2 (int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(thandle_t VAR_2, void** VAR_3, toff_t* VAR_4)
{
 uint64 VAR_5;
 tmsize_t VAR_6;
 HANDLE VAR_7;

 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = (tmsize_t)VAR_5;
 if ((uint64)VAR_6!=VAR_5)
  return (0);



 VAR_7 = FUNC_1(VAR_2, ((void*)0), VAR_1, 0, 0, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (0);
 *VAR_3 = FUNC_2(VAR_7, VAR_0, 0, 0, 0);
 FUNC_0(VAR_7);
 if (*VAR_3 == ((void*)0))
  return (0);
 *VAR_4 = VAR_5;
 return(1);
}

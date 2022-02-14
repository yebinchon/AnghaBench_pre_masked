
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,size_t) ;
 size_t FUNC_2 (size_t) ;

void* FUNC_3(size_t VAR_1, size_t VAR_2)
{
   size_t VAR_3 = VAR_1 * VAR_2;
   size_t VAR_4 = FUNC_2(VAR_3);

   if ( (VAR_1 > ((size_t)-1 / VAR_2)) || (VAR_4<VAR_3))
      return ((void*)0);

   return FUNC_1(FUNC_0(), VAR_0, VAR_4 );
}

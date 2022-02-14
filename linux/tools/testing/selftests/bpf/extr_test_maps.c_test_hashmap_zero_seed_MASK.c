
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*,int,...) ;
 scalar_t__ FUNC_1 (int,void*,long long*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 long long VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_1;
 VAR_1 |= VAR_0;

 VAR_3 = FUNC_3(3);
 VAR_4 = FUNC_3(3);

 for (VAR_2 = 0; ; VAR_2++) {
  void *VAR_9 = !VAR_2 ? ((void*)0) : &VAR_6;

  if (FUNC_1(VAR_3, VAR_9, &VAR_7) != 0)
   break;

  FUNC_0(FUNC_1(VAR_4, VAR_9, &VAR_8) != 0,
        "next_key for second map must succeed",
        "key_ptr: %p", VAR_9);
  FUNC_0(VAR_7 != VAR_8,
        "keys must match",
        "i: %d first: %lld second: %lld\n", VAR_2,
        VAR_7, VAR_8);

  VAR_6 = VAR_7;
 }

 VAR_1 = VAR_5;
 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
}

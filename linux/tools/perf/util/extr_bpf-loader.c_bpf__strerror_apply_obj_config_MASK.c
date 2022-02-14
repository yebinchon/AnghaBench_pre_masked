
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char*,size_t) ;
 int VAR_3 ;

int FUNC_3(int VAR_4, char *VAR_5, size_t VAR_6)
{
 FUNC_2(VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_0,
       "Cannot set event to BPF map in multi-thread tracing");
 FUNC_1(VAR_1,
       "%s (Hint: use -i to turn off inherit)", VAR_3);
 FUNC_1(VAR_2,
       "Can only put raw, hardware and BPF output event into a BPF map");
 FUNC_0(VAR_5, VAR_6);
 return 0;
}

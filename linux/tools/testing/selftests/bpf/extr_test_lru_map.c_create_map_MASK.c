
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,unsigned int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, sizeof(unsigned long long),
    sizeof(unsigned long long), VAR_2, VAR_1);

 if (VAR_3 == -1)
  FUNC_1("bpf_create_map");

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_5(int VAR_2)
{
 unsigned int VAR_3 = FUNC_0();
 void *VAR_4;
 size_t VAR_5;

 VAR_5 = VAR_2 * VAR_3;
 VAR_4 = FUNC_3(VAR_5);
 FUNC_4(VAR_4, 0, VAR_5);
 if (!VAR_4) {
  FUNC_2(VAR_1, "Mem alloc error (nr_cpus:%u)\n", VAR_3);
  FUNC_1(VAR_0);
 }
 return VAR_4;
}

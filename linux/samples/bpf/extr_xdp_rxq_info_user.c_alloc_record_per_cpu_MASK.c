
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datarec {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct datarec* FUNC_3 (size_t) ;
 int FUNC_4 (struct datarec*,int ,size_t) ;
 int VAR_1 ;

__attribute__((used)) static struct datarec *FUNC_5(void)
{
 unsigned int VAR_2 = FUNC_0();
 struct datarec *VAR_3;
 size_t VAR_4;

 VAR_4 = sizeof(struct datarec) * VAR_2;
 VAR_3 = FUNC_3(VAR_4);
 FUNC_4(VAR_3, 0, VAR_4);
 if (!VAR_3) {
  FUNC_2(VAR_1, "Mem alloc error (nr_cpus:%u)\n", VAR_2);
  FUNC_1(VAR_0);
 }
 return VAR_3;
}

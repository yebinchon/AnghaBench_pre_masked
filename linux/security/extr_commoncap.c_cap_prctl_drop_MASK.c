
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int cap_bset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct cred*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 struct cred* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_4)
{
 struct cred *VAR_5;

 if (!FUNC_4(FUNC_3(), VAR_0))
  return -VAR_3;
 if (!FUNC_1(VAR_4))
  return -VAR_1;

 VAR_5 = FUNC_5();
 if (!VAR_5)
  return -VAR_2;
 FUNC_0(VAR_5->cap_bset, VAR_4);
 return FUNC_2(VAR_5);
}

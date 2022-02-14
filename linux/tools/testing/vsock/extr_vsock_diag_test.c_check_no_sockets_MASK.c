
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (int ,struct list_head*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct list_head *VAR_1)
{
 if (!FUNC_2(VAR_1)) {
  FUNC_1(VAR_0, "expected no sockets\n");
  FUNC_3(VAR_0, VAR_1);
  FUNC_0(1);
 }
}

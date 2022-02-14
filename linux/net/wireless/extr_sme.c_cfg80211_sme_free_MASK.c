
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* conn; } ;
struct TYPE_2__ {struct TYPE_2__* ie; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct wireless_dev *VAR_0)
{
 if (!VAR_0->conn)
  return;

 FUNC_0(VAR_0->conn->ie);
 FUNC_0(VAR_0->conn);
 VAR_0->conn = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(bool VAR_3)
{
 FUNC_1(VAR_0, "sending replication keepalive");


 FUNC_5(&VAR_1);
 FUNC_3(&VAR_1, 'k');
 FUNC_4(&VAR_1, VAR_2);
 FUNC_4(&VAR_1, FUNC_0());
 FUNC_3(&VAR_1, VAR_3 ? 1 : 0);


 FUNC_2('d', VAR_1.data, VAR_1.len);
}

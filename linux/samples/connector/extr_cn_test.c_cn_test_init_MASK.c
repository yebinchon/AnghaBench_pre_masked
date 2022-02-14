
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int val; int idx; } ;
struct TYPE_5__ {scalar_t__ sk_socket; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_1, VAR_2, VAR_0);
 if (VAR_7)
  goto err_out;
 VAR_1.val++;
 VAR_7 = FUNC_0(&VAR_1, VAR_2, VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_1);
  goto err_out;
 }

 FUNC_6(&VAR_3, VAR_4, 0);
 FUNC_2(&VAR_3, VAR_5 + FUNC_3(1000));

 FUNC_4("initialized with id={%u.%u}\n",
  VAR_1.idx, VAR_1.val);

 return 0;

      err_out:
 if (VAR_6 && VAR_6->sk_socket)
  FUNC_5(VAR_6->sk_socket);

 return VAR_7;
}

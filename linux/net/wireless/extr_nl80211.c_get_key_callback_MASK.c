
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct key_params {scalar_t__ cipher; scalar_t__ seq; int seq_len; scalar_t__ key; int key_len; } ;
struct get_key_cookie {int error; int msg; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct nlattr*) ;
 struct nlattr* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_8, struct key_params *VAR_9)
{
 struct nlattr *VAR_10;
 struct get_key_cookie *VAR_11 = VAR_8;

 if ((VAR_9->key &&
      FUNC_2(VAR_11->msg, VAR_2,
       VAR_9->key_len, VAR_9->key)) ||
     (VAR_9->seq &&
      FUNC_2(VAR_11->msg, VAR_3,
       VAR_9->seq_len, VAR_9->seq)) ||
     (VAR_9->cipher &&
      FUNC_3(VAR_11->msg, VAR_1,
    VAR_9->cipher)))
  goto nla_put_failure;

 VAR_10 = FUNC_1(VAR_11->msg, VAR_0);
 if (!VAR_10)
  goto nla_put_failure;

 if ((VAR_9->key &&
      FUNC_2(VAR_11->msg, VAR_5,
       VAR_9->key_len, VAR_9->key)) ||
     (VAR_9->seq &&
      FUNC_2(VAR_11->msg, VAR_7,
       VAR_9->seq_len, VAR_9->seq)) ||
     (VAR_9->cipher &&
      FUNC_3(VAR_11->msg, VAR_4,
    VAR_9->cipher)))
  goto nla_put_failure;

 if (FUNC_4(VAR_11->msg, VAR_6, VAR_11->idx))
  goto nla_put_failure;

 FUNC_0(VAR_11->msg, VAR_10);

 return;
 nla_put_failure:
 VAR_11->error = 1;
}

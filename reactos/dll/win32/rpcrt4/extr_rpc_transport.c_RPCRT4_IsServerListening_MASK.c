
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection_ops {int (* is_server_listening ) (char const*) ;} ;
typedef int RPC_STATUS ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 struct connection_ops* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

RPC_STATUS FUNC_3(const char *VAR_1, const char *VAR_2)
{
  const struct connection_ops *VAR_3;

  VAR_3 = FUNC_1(VAR_1);
  if (!VAR_3)
  {
    FUNC_0("not supported for protseq %s\n", VAR_1);
    return VAR_0;
  }

  return VAR_3->is_server_listening(VAR_2);
}

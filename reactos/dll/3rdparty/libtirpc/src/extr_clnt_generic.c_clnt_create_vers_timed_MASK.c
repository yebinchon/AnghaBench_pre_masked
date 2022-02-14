
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {unsigned int low; unsigned int high; } ;
struct rpc_err {TYPE_1__ re_vers; } ;
typedef scalar_t__ rpcvers_t ;
typedef int rpcprog_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {int cf_stat; struct rpc_err cf_error; } ;
typedef int CLIENT ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,char*,int ,char*,struct timeval) ;
 int * FUNC_2 (char const*,int const,scalar_t__,char const*,struct timeval const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct rpc_err*) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;

CLIENT *
FUNC_5(const char *VAR_6, const rpcprog_t VAR_7,
    rpcvers_t *VAR_8, const rpcvers_t VAR_9, const rpcvers_t VAR_10,
    const char *VAR_11, const struct timeval *VAR_12)
{
 CLIENT *VAR_13;
 struct timeval VAR_14;
 enum clnt_stat VAR_15;
 struct rpc_err VAR_16;
 rpcvers_t VAR_17 = VAR_10;
 rpcvers_t VAR_18 = VAR_9;

 VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_17, VAR_11, VAR_12);
 if (VAR_13 == ((void*)0)) {
  return (((void*)0));
 }
 VAR_14.tv_sec = 10;
 VAR_14.tv_usec = 0;
 VAR_15 = FUNC_1(VAR_13, VAR_1, (xdrproc_t)VAR_5,
   (char *)((void*)0), (xdrproc_t)VAR_5, (char *)((void*)0), VAR_14);
 if (VAR_15 == VAR_3) {
  *VAR_8 = VAR_17;
  return (VAR_13);
 }
 while (VAR_15 == VAR_2 && VAR_17 > VAR_18) {
  unsigned int VAR_19, VAR_20;

  FUNC_4(VAR_13, &VAR_16);
  VAR_19 = VAR_16.re_vers.low;
  VAR_20 = VAR_16.re_vers.high;
  if (VAR_20 < VAR_17)
   VAR_17 = VAR_20;
  else
   VAR_17--;
  if (VAR_19 > VAR_18)
   VAR_18 = VAR_19;
  if (VAR_18 > VAR_17) {
   goto error;
  }
  FUNC_0(VAR_13, VAR_0, (char *)&VAR_17);
  VAR_15 = FUNC_1(VAR_13, VAR_1, (xdrproc_t)VAR_5,
    (char *)((void*)0), (xdrproc_t)VAR_5,
    (char *)((void*)0), VAR_14);
  if (VAR_15 == VAR_3) {
   *VAR_8 = VAR_17;
   return (VAR_13);
  }
 }
 FUNC_4(VAR_13, &VAR_16);

error:
 VAR_4.cf_stat = VAR_15;
 VAR_4.cf_error = VAR_16;
 FUNC_3(VAR_13);
 return (((void*)0));
}

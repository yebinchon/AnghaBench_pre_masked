
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_sendbuffer {int dummy; } ;
struct skynet_context {int dummy; } ;


 int FUNC_0 (struct socket_sendbuffer*,int,void const*,int) ;
 int FUNC_1 (struct skynet_context*,char const*,struct socket_sendbuffer*) ;

__attribute__((used)) static inline int FUNC_2(struct skynet_context *VAR_0, int VAR_1, const char * VAR_2, const void *VAR_3, int VAR_4) {
 struct socket_sendbuffer VAR_5;
 FUNC_0(&VAR_5, VAR_1, VAR_3, VAR_4);
 return FUNC_1(VAR_0, VAR_2, &VAR_5);
}

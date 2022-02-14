
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int * hdr; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline char *FUNC_0(struct tipc_msg *VAR_1)
{
 return (char *)&VAR_1->hdr[VAR_0];
}

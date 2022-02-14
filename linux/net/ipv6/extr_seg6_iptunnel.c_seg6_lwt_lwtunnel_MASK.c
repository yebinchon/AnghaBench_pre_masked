
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_lwt {int dummy; } ;
struct lwtunnel_state {scalar_t__ data; } ;



__attribute__((used)) static inline struct seg6_lwt *FUNC_0(struct lwtunnel_state *VAR_0)
{
 return (struct seg6_lwt *)VAR_0->data;
}

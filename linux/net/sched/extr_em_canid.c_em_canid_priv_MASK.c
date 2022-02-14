
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ematch {scalar_t__ data; } ;
struct canid_match {int dummy; } ;



__attribute__((used)) static inline struct canid_match *FUNC_0(struct tcf_ematch *VAR_0)
{
 return (struct canid_match *)VAR_0->data;
}

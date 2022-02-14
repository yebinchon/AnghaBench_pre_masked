
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct fib_rule_hdr {scalar_t__ src_len; scalar_t__ dst_len; scalar_t__ tos; } ;
struct fib_rule {int dummy; } ;
struct fib4_rule {scalar_t__ src_len; scalar_t__ dst_len; scalar_t__ tos; scalar_t__ tclassid; scalar_t__ src; scalar_t__ dst; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_3, struct fib_rule_hdr *VAR_4,
        struct nlattr **VAR_5)
{
 struct fib4_rule *VAR_6 = (struct fib4_rule *) VAR_3;

 if (VAR_4->src_len && (VAR_6->src_len != VAR_4->src_len))
  return 0;

 if (VAR_4->dst_len && (VAR_6->dst_len != VAR_4->dst_len))
  return 0;

 if (VAR_4->tos && (VAR_6->tos != VAR_4->tos))
  return 0;






 if (VAR_4->src_len && (VAR_6->src != FUNC_0(VAR_5[VAR_2])))
  return 0;

 if (VAR_4->dst_len && (VAR_6->dst != FUNC_0(VAR_5[VAR_0])))
  return 0;

 return 1;
}

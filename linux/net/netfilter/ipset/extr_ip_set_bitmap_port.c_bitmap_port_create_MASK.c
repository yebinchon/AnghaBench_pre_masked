
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct ip_set {int dsize; int timeout; int * variant; } ;
struct bitmap_port {int elements; int memsize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ip_set*,int ) ;
 int FUNC_2 (struct ip_set*,struct bitmap_port*,scalar_t__,scalar_t__) ;
 struct bitmap_port* FUNC_3 (int) ;
 int FUNC_4 (struct nlattr**,size_t) ;
 int FUNC_5 (struct ip_set*,struct nlattr**,int ,int ) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,size_t) ;
 int FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct bitmap_port*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct net *VAR_8, struct ip_set *VAR_9, struct nlattr *VAR_10[],
     u32 VAR_11)
{
 struct bitmap_port *VAR_12;
 u16 VAR_13, VAR_14;
 u32 VAR_15;

 if (FUNC_11(!FUNC_4(VAR_10, VAR_2) ||
       !FUNC_4(VAR_10, VAR_3) ||
       !FUNC_7(VAR_10, VAR_4) ||
       !FUNC_7(VAR_10, VAR_1)))
  return -VAR_5;

 VAR_13 = FUNC_6(VAR_10[VAR_2]);
 VAR_14 = FUNC_6(VAR_10[VAR_3]);
 if (VAR_13 > VAR_14)
  FUNC_10(VAR_13, VAR_14);

 VAR_15 = VAR_14 - VAR_13 + 1;
 VAR_9->dsize = FUNC_5(VAR_9, VAR_10, 0, 0);
 VAR_12 = FUNC_3(sizeof(*VAR_12) + VAR_15 * VAR_9->dsize);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->elements = VAR_15;
 VAR_12->memsize = FUNC_0(0, VAR_12->elements);
 VAR_9->variant = &VAR_6;
 if (!FUNC_2(VAR_9, VAR_12, VAR_13, VAR_14)) {
  FUNC_9(VAR_12);
  return -VAR_0;
 }
 if (VAR_10[VAR_4]) {
  VAR_9->timeout = FUNC_8(VAR_10[VAR_4]);
  FUNC_1(VAR_9, VAR_7);
 }
 return 0;
}

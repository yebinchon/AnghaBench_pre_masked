
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct disttable {size_t size; int * table; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;
typedef int s16 ;
typedef int __s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct disttable*) ;
 struct disttable* FUNC_1 (int,int ) ;
 int * FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (struct nlattr const*) ;
 int * FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct disttable*,struct disttable*) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_4, struct disttable **VAR_5,
     const struct nlattr *VAR_6)
{
 size_t VAR_7 = FUNC_3(VAR_6)/sizeof(__s16);
 const __s16 *VAR_8 = FUNC_2(VAR_6);
 spinlock_t *VAR_9;
 struct disttable *VAR_10;
 int VAR_11;

 if (!VAR_7 || VAR_7 > VAR_3)
  return -VAR_0;

 VAR_10 = FUNC_1(sizeof(struct disttable) + VAR_7 * sizeof(s16), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->size = VAR_7;
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_10->table[VAR_11] = VAR_8[VAR_11];

 VAR_9 = FUNC_4(VAR_4);

 FUNC_5(VAR_9);
 FUNC_7(*VAR_5, VAR_10);
 FUNC_6(VAR_9);

 FUNC_0(VAR_10);
 return 0;
}

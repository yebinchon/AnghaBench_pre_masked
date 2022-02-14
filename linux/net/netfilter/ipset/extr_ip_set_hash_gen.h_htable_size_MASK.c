
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct htable {int dummy; } ;
struct hbucket {int dummy; } ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(u8 VAR_0)
{
 size_t VAR_1;


 if (VAR_0 > 31)
  return 0;
 VAR_1 = FUNC_0(VAR_0);
 if ((((size_t)-1) - sizeof(struct htable)) / sizeof(struct hbucket *)
     < VAR_1)
  return 0;

 return VAR_1 * sizeof(struct hbucket *) + sizeof(struct htable);
}

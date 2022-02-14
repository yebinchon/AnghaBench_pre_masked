
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smartypants_data {int in_dquote; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,int ,int const,char,int *) ;

__attribute__((used)) static size_t
FUNC_2(struct buf *VAR_0, struct smartypants_data *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 if (!FUNC_1(VAR_0, VAR_2, VAR_4 > 0 ? VAR_3[1] : 0, 'd', &VAR_1->in_dquote))
  FUNC_0(VAR_0, "&quot;");

 return 0;
}

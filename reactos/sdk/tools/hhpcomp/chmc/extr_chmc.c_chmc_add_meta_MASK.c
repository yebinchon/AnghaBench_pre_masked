
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcTreeNode {int dummy; } ;
struct chmcSection {int offset; } ;
struct chmcFile {int sections_num; struct chmcSection** sections; } ;
typedef scalar_t__ UInt64 ;
typedef int UChar ;


 int FUNC_0 (struct chmcFile*) ;
 struct chmcTreeNode* FUNC_1 (struct chmcFile*,char const*,int ,int,int *,int ,scalar_t__) ;

struct chmcTreeNode *FUNC_2(struct chmcFile *VAR_0, const char *VAR_1,
                                   int VAR_2,
              UChar *VAR_3, UInt64 VAR_4)
{
 struct chmcSection *VAR_5;
 struct chmcTreeNode *VAR_6;

 FUNC_0(VAR_0);

 if (VAR_2 >= VAR_0->sections_num)
  return ((void*)0);

 VAR_5 = VAR_0->sections[VAR_2];

 VAR_6 = FUNC_1(VAR_0, VAR_1, 0, VAR_2, VAR_3, VAR_5->offset, VAR_4);

 if ((VAR_6) && (VAR_4 > 0))
  VAR_5->offset += VAR_4;

 return VAR_6;
}

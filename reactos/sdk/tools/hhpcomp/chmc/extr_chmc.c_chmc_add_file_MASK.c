
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcTreeNode {int dummy; } ;
struct chmcSection {int offset; } ;
struct chmcFile {int sections_num; struct chmcSection** sections; } ;
typedef scalar_t__ UInt64 ;
typedef int UInt16 ;
typedef int UChar ;


 int FUNC_0 (struct chmcFile*) ;
 struct chmcTreeNode* FUNC_1 (struct chmcFile*,char const*,int ,int,int *,int ,scalar_t__) ;

struct chmcTreeNode *FUNC_2(struct chmcFile *VAR_0, const char *VAR_1,
                                   UInt16 VAR_2, int VAR_3, UChar *VAR_4,
                                   UInt64 VAR_5)
{
 struct chmcSection *VAR_6;
 struct chmcTreeNode *VAR_7;

 FUNC_0(VAR_0);

 if (VAR_3 >= VAR_0->sections_num)
  return ((void*)0);

 VAR_6 = VAR_0->sections[VAR_3];

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0),
                       VAR_6->offset, VAR_5);

 if ((VAR_7) && (VAR_5 > 0))
  VAR_6->offset += VAR_5;

 return VAR_7;
}

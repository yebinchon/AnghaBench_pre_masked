
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chmcTreeNode {int flags; } ;
struct chmcFile {TYPE_1__** sections; } ;
typedef int UChar ;
struct TYPE_2__ {int control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct chmcTreeNode* FUNC_0 (struct chmcFile*,char*,int ,int *,int ) ;

int FUNC_1(struct chmcFile *VAR_4)
{
 struct chmcTreeNode *VAR_5;

 VAR_5 = FUNC_0(VAR_4, "::DataSpace/Storage/MSCompressed/ControlData",
                      0, (UChar *)&VAR_4->sections[1]->control_data,
                      VAR_3);

 if (VAR_5) {
  VAR_5->flags |= VAR_2;
  return VAR_1;
 }

 return VAR_0;
}

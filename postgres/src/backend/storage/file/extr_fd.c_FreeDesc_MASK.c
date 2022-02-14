
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int dir; int file; } ;
struct TYPE_6__ {int kind; TYPE_1__ desc; } ;
typedef TYPE_2__ AllocateDesc ;






 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 size_t VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(AllocateDesc *VAR_3)
{
 int VAR_4;


 switch (VAR_3->kind)
 {
  case 130:
   VAR_4 = FUNC_3(VAR_3->desc.file);
   break;
  case 129:
   VAR_4 = FUNC_4(VAR_3->desc.file);
   break;
  case 131:
   VAR_4 = FUNC_1(VAR_3->desc.dir);
   break;
  case 128:
   VAR_4 = FUNC_0(VAR_3->desc.fd);
   break;
  default:
   FUNC_2(VAR_0, "AllocateDesc kind not recognized");
   VAR_4 = 0;
   break;
 }


 VAR_2--;
 *VAR_3 = VAR_1[VAR_2];

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct TYPE_2__ {scalar_t__ fd; int status; } ;
struct dso {int binary_type; TYPE_1__ data; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct dso*,struct machine*) ;

__attribute__((used)) static void FUNC_1(struct dso *VAR_5, struct machine *VAR_6)
{
 enum dso_binary_type VAR_7[] = {
  VAR_0,
  VAR_2,
  VAR_1,
 };
 int VAR_8 = 0;

 if (VAR_5->data.fd >= 0)
  return;

 if (VAR_5->binary_type != VAR_1) {
  VAR_5->data.fd = FUNC_0(VAR_5, VAR_6);
  goto out;
 }

 do {
  VAR_5->binary_type = VAR_7[VAR_8++];

  VAR_5->data.fd = FUNC_0(VAR_5, VAR_6);
  if (VAR_5->data.fd >= 0)
   goto out;

 } while (VAR_5->binary_type != VAR_1);
out:
 if (VAR_5->data.fd >= 0)
  VAR_5->data.status = VAR_4;
 else
  VAR_5->data.status = VAR_3;
}

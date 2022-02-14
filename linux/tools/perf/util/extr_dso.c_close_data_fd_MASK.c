
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fd; scalar_t__ file_size; } ;
struct dso {TYPE_1__ data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dso*) ;

__attribute__((used)) static void FUNC_2(struct dso *VAR_0)
{
 if (VAR_0->data.fd >= 0) {
  FUNC_0(VAR_0->data.fd);
  VAR_0->data.fd = -1;
  VAR_0->data.file_size = 0;
  FUNC_1(VAR_0);
 }
}

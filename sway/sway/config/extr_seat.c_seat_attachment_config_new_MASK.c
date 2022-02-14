
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_attachment_config {int dummy; } ;


 int VAR_0 ;
 struct seat_attachment_config* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;

struct seat_attachment_config *FUNC_2(void) {
 struct seat_attachment_config *VAR_1 =
  FUNC_0(1, sizeof(struct seat_attachment_config));
 if (!VAR_1) {
  FUNC_1(VAR_0, "cannot allocate attachment config");
  return ((void*)0);
 }
 return VAR_1;
}

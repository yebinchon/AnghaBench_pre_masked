
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_attachment_config {int identifier; } ;


 struct seat_attachment_config* FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct seat_attachment_config *FUNC_2(
  struct seat_attachment_config *VAR_0) {
 struct seat_attachment_config *VAR_1 = FUNC_0();
 if (!VAR_1) {
  return ((void*)0);
 }

 VAR_1->identifier = FUNC_1(VAR_0->identifier);

 return VAR_1;
}

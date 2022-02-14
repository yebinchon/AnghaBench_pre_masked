
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_line {char const* text; int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (struct status_line*) ;

void FUNC_1(struct status_line *VAR_1, const char *VAR_2) {
 FUNC_0(VAR_1);
 VAR_1->protocol = VAR_0;
 VAR_1->text = VAR_2;
}

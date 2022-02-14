
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct buf *VAR_2, const struct buf *VAR_3, int VAR_4, void *VAR_5)
{
 if (VAR_4 & VAR_1) {
  FUNC_0(VAR_2, "<th");
 } else {
  FUNC_0(VAR_2, "<td");
 }

 switch (VAR_4 & VAR_0) {
 case 130:
  FUNC_0(VAR_2, " style=\"text-align: center\">");
  break;

 case 129:
  FUNC_0(VAR_2, " style=\"text-align: left\">");
  break;

 case 128:
  FUNC_0(VAR_2, " style=\"text-align: right\">");
  break;

 default:
  FUNC_0(VAR_2, ">");
 }

 if (VAR_3)
  FUNC_1(VAR_2, VAR_3->data, VAR_3->size);

 if (VAR_4 & VAR_1) {
  FUNC_0(VAR_2, "</th>\n");
 } else {
  FUNC_0(VAR_2, "</td>\n");
 }
}

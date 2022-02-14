
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; unsigned char* data; } ;
struct t_server {unsigned char index; TYPE_1__ s; } ;
struct t_num {unsigned char len; unsigned char* data; } ;
struct TYPE_5__ {unsigned char* username; unsigned char* key; } ;
typedef TYPE_2__ TSRP_SESSION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int,unsigned char*,int,int ) ;
 scalar_t__ FUNC_2 (int,unsigned char*,int,int ) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct t_server*) ;
 struct t_num* FUNC_5 (struct t_server*) ;
 unsigned char* FUNC_6 (struct t_server*,struct t_num*) ;
 struct t_server* FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (struct t_server*) ;
 scalar_t__ FUNC_9 (struct t_server*,unsigned char*) ;

int FUNC_10(int VAR_5, TSRP_SESSION *VAR_6)
{
 int VAR_7, VAR_8;
 unsigned char VAR_9[VAR_1], *VAR_10;
 unsigned char VAR_11[VAR_0 + 1], VAR_12[VAR_0];
 struct t_server *VAR_13;
 struct t_num VAR_14, *VAR_15;



 VAR_7 = FUNC_1(VAR_5, VAR_11, 1, 0);
 if (VAR_7 <= 0) {
  return 0;
 }
 VAR_8 = VAR_11[0];
 VAR_7 = FUNC_1(VAR_5, VAR_9, VAR_8, VAR_2);
 if (VAR_7 <= 0) {
  return 0;
 }
 VAR_9[VAR_8] = '\0';

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13 == ((void*)0)) {
  return 0;
 }



 VAR_11[0] = VAR_13->index;
 VAR_7 = VAR_13->s.len;
 VAR_11[1] = VAR_7;
 FUNC_0(VAR_11 + 2, VAR_13->s.data, VAR_7);
 if (FUNC_2(VAR_5, VAR_11, VAR_7 + 2, 0) < 0) {
  return 0;
 }



 VAR_15 = FUNC_5(VAR_13);



 VAR_7 = FUNC_1(VAR_5, VAR_11, 1, 0);
 if (VAR_7 <= 0) {
  return 0;
 }
 VAR_14.len = VAR_11[0] + 1;
 VAR_14.data = VAR_12;
 VAR_7 = FUNC_1(VAR_5, VAR_12, VAR_14.len, VAR_2);
 if (VAR_7 <= 0) {
  return 0;
 }



 VAR_11[0] = VAR_15->len - 1;
 FUNC_0(VAR_11 + 1, VAR_15->data, VAR_15->len);
 if (FUNC_2(VAR_5, VAR_11, VAR_15->len + 1, 0) < 0) {
  return 0;
 }



 VAR_10 = FUNC_6(VAR_13, &VAR_14);
 if (VAR_10 == ((void*)0)) {
  return 0;
 }



 VAR_7 = FUNC_1(VAR_5, VAR_11, VAR_3, VAR_2);
 if (VAR_7 <= 0) {
  return 0;
 }
 if (FUNC_9(VAR_13, VAR_11) != 0) {
  return 0;
 }



 if (FUNC_2(VAR_5, FUNC_8(VAR_13), VAR_3, 0) < 0) {
  return 0;
 }



 if (VAR_6) {
  FUNC_0(VAR_6->username, VAR_9, FUNC_3(VAR_9) + 1);
  FUNC_0(VAR_6->key, VAR_10, VAR_4);
 }
 FUNC_4(VAR_13);

 return 1;
}

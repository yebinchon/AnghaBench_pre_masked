
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct tree_cache {int dummy; } ;
struct packet {TYPE_1__* options; } ;
struct dhcp_packet {unsigned char* options; } ;
typedef int priority_list ;
typedef int buffer ;
struct TYPE_2__ {unsigned char* data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char VAR_4 ;
 size_t VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 size_t VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char* VAR_12 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int VAR_13 ;
 int FUNC_2 (unsigned char*,int,struct tree_cache**,unsigned char*,int,int,int) ;

int
FUNC_3(struct packet *VAR_14, struct dhcp_packet *VAR_15,
    int VAR_16, struct tree_cache **VAR_17)
{
 unsigned char VAR_18[300], VAR_19[4096];
 int VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;
 if (!VAR_16 &&
     VAR_14 &&
     VAR_14->options[VAR_5].data &&
     (VAR_14->options[VAR_5].len >=
     sizeof(u_int16_t)))
  VAR_16 = FUNC_0(
      VAR_14->options[VAR_5].data);

 if (VAR_16)
  VAR_21 = VAR_16 - VAR_1;
 else
  VAR_21 = 576 - VAR_1;

 if (VAR_21 > sizeof(VAR_19))
  VAR_21 = sizeof(VAR_19);


 VAR_20 = 0;
 VAR_18[VAR_20++] = VAR_7;
 VAR_18[VAR_20++] = VAR_10;
 VAR_18[VAR_20++] = VAR_4;
 VAR_18[VAR_20++] = VAR_6;






 if (VAR_14 &&
     VAR_14->options[VAR_9].data) {
  int VAR_25 =
      VAR_14->options[VAR_9].len;
  if (VAR_25 + VAR_20 > sizeof(VAR_18))
   VAR_25 = sizeof(VAR_18) - VAR_20;

  FUNC_1(&VAR_18[VAR_20],
      VAR_14->options[VAR_9].data,
      VAR_25);
  VAR_20 += VAR_25;
 } else {
  FUNC_1(&VAR_18[VAR_20],
      VAR_12,
      VAR_13);
  VAR_20 += VAR_13;
 }


 VAR_23 = FUNC_2(
     VAR_19,
     VAR_21 - 7,
     VAR_17, VAR_18, VAR_20, VAR_21,
     VAR_21);


 FUNC_1(VAR_15->options, VAR_3, 4);
 VAR_22 = 4;






 if (VAR_23 <= VAR_21 - VAR_22) {
  FUNC_1(&VAR_15->options[VAR_22],
      VAR_19, VAR_23);
  VAR_22 += VAR_23;
  if (VAR_22 < VAR_21)
   VAR_15->options[VAR_22++] = VAR_11;
  VAR_24 = VAR_2 + VAR_22;
 } else {
  VAR_15->options[VAR_22++] = VAR_8;
  VAR_15->options[VAR_22++] = 1;
  if (VAR_23 >
      VAR_21 - VAR_22 + VAR_0)
   VAR_15->options[VAR_22++] = 3;
  else
   VAR_15->options[VAR_22++] = 1;

  FUNC_1(&VAR_15->options[VAR_22],
      VAR_19, VAR_21 - VAR_22);
  VAR_24 = VAR_2 + VAR_22;
 }
 return (VAR_24);
}

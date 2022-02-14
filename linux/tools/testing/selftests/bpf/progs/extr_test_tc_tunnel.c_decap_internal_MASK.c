
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udph ;
struct v6hdr {int dummy; } ;
struct udphdr {int dest; int protocol; } ;
struct gre_hdr {int dest; int protocol; } ;
struct __sk_buff {int dummy; } ;
typedef int mpls_label ;
typedef int greh ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct __sk_buff*,int,int ,int ) ;
 int FUNC_2 (struct __sk_buff*,int,struct udphdr*,int) ;

__attribute__((used)) static int FUNC_3(struct __sk_buff *VAR_5, int VAR_6, int VAR_7, char VAR_8)
{
 char VAR_9[sizeof(struct v6hdr)];
 struct gre_hdr VAR_10;
 struct udphdr VAR_11;
 int VAR_12 = VAR_7;

 switch (VAR_8) {
 case 131:
 case 130:
  break;
 case 132:
  VAR_12 += sizeof(struct gre_hdr);
  if (FUNC_2(VAR_5, VAR_6 + VAR_7, &VAR_10, sizeof(VAR_10)) < 0)
   return VAR_3;
  switch (FUNC_0(VAR_10.protocol)) {
  case 134:
   VAR_12 += sizeof(mpls_label);
   break;
  case 133:
   VAR_12 += VAR_2;
   break;
  }
  break;
 case 129:
  VAR_12 += sizeof(struct udphdr);
  if (FUNC_2(VAR_5, VAR_6 + VAR_7, &VAR_11, sizeof(VAR_11)) < 0)
   return VAR_3;
  switch (FUNC_0(VAR_11.dest)) {
  case 128:
   VAR_12 += sizeof(mpls_label);
   break;
  case 135:
   VAR_12 += VAR_2;
   break;
  }
  break;
 default:
  return VAR_3;
 }

 if (FUNC_1(VAR_5, -VAR_12, VAR_0,
    VAR_1))
  return VAR_4;

 return VAR_3;
}

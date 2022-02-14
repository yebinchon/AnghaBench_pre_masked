
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fcgi_request_type ;
struct TYPE_3__ {unsigned char contentLengthB0; unsigned char contentLengthB1; unsigned char paddingLength; unsigned char requestIdB0; unsigned char requestIdB1; int version; int type; scalar_t__ reserved; } ;
typedef TYPE_1__ fcgi_header ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(fcgi_header *VAR_1, fcgi_request_type VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = ((VAR_4 + 7) & ~7) - VAR_4;

 VAR_1->contentLengthB0 = (unsigned char)(VAR_4 & 0xff);
 VAR_1->contentLengthB1 = (unsigned char)((VAR_4 >> 8) & 0xff);
 VAR_1->paddingLength = (unsigned char)VAR_5;
 VAR_1->requestIdB0 = (unsigned char)(VAR_3 & 0xff);
 VAR_1->requestIdB1 = (unsigned char)((VAR_3 >> 8) & 0xff);
 VAR_1->reserved = 0;
 VAR_1->type = VAR_2;
 VAR_1->version = VAR_0;
 if (VAR_5) {
  FUNC_0(((unsigned char*)VAR_1) + sizeof(fcgi_header) + VAR_4, 0, VAR_5);
 }
 return VAR_5;
}

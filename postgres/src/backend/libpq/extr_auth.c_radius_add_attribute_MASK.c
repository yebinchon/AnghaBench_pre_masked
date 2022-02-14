
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {scalar_t__ length; } ;
typedef TYPE_1__ radius_packet ;
struct TYPE_5__ {int length; int data; int attribute; } ;
typedef TYPE_2__ radius_attribute ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_2(radius_packet *VAR_2, uint8 VAR_3, const unsigned char *VAR_4, int VAR_5)
{
 radius_attribute *VAR_6;

 if (VAR_2->length + VAR_5 > VAR_0)
 {






  FUNC_0(VAR_1,
    "adding attribute code %d with length %d to radius packet would create oversize packet, ignoring",
    VAR_3, VAR_5);
  return;
 }

 VAR_6 = (radius_attribute *) ((unsigned char *) VAR_2 + VAR_2->length);
 VAR_6->attribute = VAR_3;
 VAR_6->length = VAR_5 + 2;
 FUNC_1(VAR_6->data, VAR_4, VAR_5);
 VAR_2->length += VAR_6->length;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_2__ {int* chksum; int magic; } ;
union record {char* charptr; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const ut8 *VAR_2, size_t VAR_3) {
 const union record *VAR_4 = (const union record *)(const void *)VAR_2;
 int VAR_5, VAR_6, VAR_7;
 const char *VAR_8;

 if (VAR_3 < sizeof (union record)) {
  return 0;
 }

 VAR_7 = FUNC_0 (8, VAR_4->header.chksum);

 VAR_6 = 0;
 VAR_8 = VAR_4->charptr;
 for (VAR_5 = sizeof(union record); --VAR_5 >= 0;) {




  VAR_6 += 0xFF & *VAR_8++;
 }


 for (VAR_5 = sizeof VAR_4->header.chksum; --VAR_5 >= 0;) {
  VAR_6 -= 0xFF & VAR_4->header.chksum[VAR_5];
 }
 VAR_6 += ' ' * sizeof VAR_4->header.chksum;
 if (VAR_6 != VAR_7) {
  return 0;
 }
 if (FUNC_1 (VAR_4->header.magic, VAR_0) == 0) {
  return 3;
 }
 if (FUNC_1 (VAR_4->header.magic, VAR_1) == 0) {
  return 2;
 }
 return 1;
}

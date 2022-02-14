
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct jimage_header {scalar_t__ stag_magic; scalar_t__ sch2_magic; scalar_t__ stag_cmark; scalar_t__ stag_id; scalar_t__ sch2_version; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(u_char *VAR_5, size_t VAR_6)
{
 struct jimage_header *VAR_7 = (struct jimage_header *)VAR_5;


 if (VAR_7->stag_magic != VAR_4) {
  FUNC_0("invalid jImage stag header magic: %04x\n",
    VAR_7->stag_magic);
  return -VAR_0;
 }
 if (VAR_7->sch2_magic != VAR_1) {
  FUNC_0("invalid jImage sch2 header magic: %04x\n",
    VAR_7->stag_magic);
  return -VAR_0;
 }
 if (VAR_7->stag_cmark != VAR_7->stag_id) {
  FUNC_0("invalid jImage stag header cmark: %02x\n",
    VAR_7->stag_magic);
  return -VAR_0;
 }
 if (VAR_7->stag_id != VAR_3) {
  FUNC_0("invalid jImage stag header id: %02x\n",
    VAR_7->stag_magic);
  return -VAR_0;
 }
 if (VAR_7->sch2_version != VAR_2) {
  FUNC_0("invalid jImage sch2 header version: %02x\n",
    VAR_7->stag_magic);
  return -VAR_0;
 }

 return 0;
}

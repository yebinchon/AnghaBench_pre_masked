
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_9, char **VAR_10)
{
 if (!FUNC_4(VAR_6)) {
  FUNC_0("MS_RDONLY malfunctions\n");
 }
 if (!FUNC_2("devpts", "newinstance", VAR_2, VAR_2, 0)) {
  FUNC_0("MS_NODEV malfunctions\n");
 }
 if (!FUNC_4(VAR_5)) {
  FUNC_0("MS_NOSUID malfunctions\n");
 }
 if (!FUNC_4(VAR_4)) {
  FUNC_0("MS_NOEXEC malfunctions\n");
 }
 if (!FUNC_3(VAR_7,
           VAR_1))
 {
  FUNC_0("MS_RELATIME malfunctions\n");
 }
 if (!FUNC_3(VAR_8,
           VAR_1))
 {
  FUNC_0("MS_STRICTATIME malfunctions\n");
 }
 if (!FUNC_3(VAR_1,
           VAR_8))
 {
  FUNC_0("MS_NOATIME malfunctions\n");
 }
 if (!FUNC_3(VAR_7|VAR_3,
           VAR_1))
 {
  FUNC_0("MS_RELATIME|MS_NODIRATIME malfunctions\n");
 }
 if (!FUNC_3(VAR_8|VAR_3,
           VAR_1))
 {
  FUNC_0("MS_STRICTATIME|MS_NODIRATIME malfunctions\n");
 }
 if (!FUNC_3(VAR_1|VAR_3,
           VAR_8))
 {
  FUNC_0("MS_NOATIME|MS_DIRATIME malfunctions\n");
 }
 if (!FUNC_2("ramfs", ((void*)0), VAR_8, 0, VAR_1))
 {
  FUNC_0("Default atime malfunctions\n");
 }
 if (!FUNC_1()) {
  FUNC_0("Mount flags unexpectedly changed after remount\n");
 }
 return VAR_0;
}

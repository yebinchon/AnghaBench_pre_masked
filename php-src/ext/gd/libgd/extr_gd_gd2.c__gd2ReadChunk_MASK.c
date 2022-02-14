
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uLongf ;
typedef int gdIOCtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned char*,scalar_t__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6 (int VAR_3, char *VAR_4, int VAR_5, char *VAR_6, uLongf * VAR_7, gdIOCtx * VAR_8)
{
 int VAR_9;

 if (FUNC_3(VAR_8) != VAR_3) {
  FUNC_0(FUNC_4("Positioning in file to %d", VAR_3));
  FUNC_2(VAR_8, VAR_3);
 } else {
  FUNC_0(FUNC_4("Already Positioned in file to %d", VAR_3));
 }


 FUNC_0(FUNC_4("Reading file"));
 if (FUNC_1(VAR_4, VAR_5, VAR_8) != VAR_5) {
  return VAR_0;
 }
 FUNC_0(FUNC_4("Got %d bytes. Uncompressing into buffer of %d bytes", VAR_5, (int)*VAR_7));
 VAR_9 = FUNC_5((unsigned char *) VAR_6, VAR_7, (unsigned char *) VAR_4, VAR_5);
 if (VAR_9 != VAR_2) {
  FUNC_0(FUNC_4("Error %d from uncompress", VAR_9));
  return VAR_0;
 }
 FUNC_0(FUNC_4("Got chunk"));

 return VAR_1;
}

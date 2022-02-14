
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdfapp_t ;
typedef int Atom ;


 int FUNC_0 (int ,int ,int ,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned short*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(pdfapp_t *VAR_7, Atom VAR_8)
{
 unsigned short VAR_9[16 * 1024];
 char *VAR_10 = VAR_0;
 char *VAR_11 = VAR_2;
 unsigned short *VAR_12;
 int VAR_13;

 FUNC_2(&VAR_3, VAR_9, 16 * 1024);

 for (VAR_12 = VAR_9; VAR_12[0] != 0; VAR_12++)
 {
  VAR_13 = VAR_12[0];

  VAR_11 += FUNC_1(VAR_11, VAR_13);

  if (VAR_13 < 256)
   *VAR_10++ = VAR_13;
  else
   *VAR_10++ = '?';
 }

 *VAR_11 = 0;
 *VAR_10 = 0;

 FUNC_0(VAR_5, VAR_8, VAR_6, VAR_1);

 VAR_4 = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fmtbuf {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (struct fmtbuf*,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct fmtbuf *VAR_0, int64_t VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 uint64_t VAR_6;

 if (VAR_1 < 0)
 {
  VAR_2 = '-';
  VAR_6 = -VAR_1;
 }
 else if (VAR_2)
 {
  VAR_2 = '+';
  VAR_6 = VAR_1;
 }
 else
 {
  VAR_2 = 0;
  VAR_6 = VAR_1;
 }
 FUNC_0(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}

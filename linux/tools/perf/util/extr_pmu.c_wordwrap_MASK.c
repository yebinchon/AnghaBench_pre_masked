__attribute__((used)) static void FUNC_0(char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1;
 int VAR_5;

 while (*VAR_0) {
  int VAR_6 = strcspn(VAR_0, " \t");

  if (VAR_4 + VAR_6 >= VAR_2 && VAR_4 > VAR_1) {
   printf("\n%*s", VAR_1, "");
   VAR_4 = VAR_1 + VAR_3;
  }
  VAR_5 = FUNC_0("%s%.*s", VAR_4 > VAR_1 ? " " : "", VAR_6, VAR_0);
  if (VAR_5 <= 0)
   break;
  VAR_0 += VAR_6;
  VAR_4 += VAR_5;
  VAR_0 = FUNC_0(VAR_0);
 }
}

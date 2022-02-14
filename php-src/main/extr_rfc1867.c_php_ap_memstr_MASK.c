__attribute__((used)) static void *FUNC_0(char *VAR_0, int VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1;
 char *VAR_6 = VAR_0;


 while( (VAR_6 = memchr(VAR_6, VAR_2[0], VAR_5)) ) {


  VAR_5 = VAR_1 - (VAR_6 - (char *)VAR_0);


  if (memcmp(VAR_2, VAR_6, VAR_3 < VAR_5 ? VAR_3 : VAR_5) == 0 && (VAR_4 || VAR_5 >= VAR_3)) {
   break;
  }


  VAR_6++; VAR_5--;
 }

 return VAR_6;
}

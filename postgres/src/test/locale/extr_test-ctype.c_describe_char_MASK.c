void
FUNC_0(int VAR_0)
{
 unsigned char VAR_1 = VAR_0,
    VAR_2 = toupper(VAR_0),
    VAR_3 = tolower(VAR_0);

 if (!isprint(VAR_1))
  VAR_1 = ' ';
 if (!FUNC_0(VAR_2))
  VAR_2 = ' ';
 if (!FUNC_0(VAR_3))
  VAR_3 = ' ';

 printf("chr#%-4d%2c%6d%6d%6d%6d%6d%6d%6d%6d%6d%6d%6d%4c%4c\n", VAR_0, VAR_1, FUNC_0(isalnum(VAR_0)), FUNC_0(isalpha(VAR_0)), FUNC_0(iscntrl(VAR_0)), FUNC_0(isdigit(VAR_0)), FUNC_0(islower(VAR_0)), FUNC_0(isgraph(VAR_0)), FUNC_0(FUNC_0(VAR_0)), FUNC_0(ispunct(VAR_0)), FUNC_0(isspace(VAR_0)), FUNC_0(isupper(VAR_0)), FUNC_0(isxdigit(VAR_0)), VAR_3, VAR_2);
}

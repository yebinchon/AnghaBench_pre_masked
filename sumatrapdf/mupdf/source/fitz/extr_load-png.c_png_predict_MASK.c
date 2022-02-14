__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = (VAR_1 * VAR_3 * VAR_4 + 7) / 8;
 unsigned int VAR_6 = (VAR_3 * VAR_4 + 7) / 8;
 unsigned int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8 ++)
 {
  unsigned char *VAR_9 = VAR_0 + (unsigned int)((VAR_5 + 1) * VAR_8);
  unsigned char *VAR_10 = VAR_0 + (unsigned int)(VAR_5 * VAR_8);

  unsigned char *VAR_11 = VAR_10;
  unsigned char *VAR_12 = VAR_10 - VAR_5;
  unsigned char *VAR_13 = VAR_10 - VAR_5;

  switch (*VAR_9++)
  {
  default:
  case 0:
   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    *VAR_10++ = *VAR_9++;
   break;

  case 1:
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    *VAR_10++ = *VAR_9++;
   for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++)
    *VAR_10++ = *VAR_9++ + *VAR_11++;
   break;

  case 2:
   if (VAR_8 == 0)
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++;
   else
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++ + *VAR_12++;
   break;

  case 3:
   if (VAR_8 == 0)
   {
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     *VAR_10++ = *VAR_9++;
    for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++ + (*VAR_11++ >> 1);
   }
   else
   {
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     *VAR_10++ = *VAR_9++ + (*VAR_12++ >> 1);
    for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++ + ((*VAR_12++ + *VAR_11++) >> 1);
   }
   break;

  case 4:
   if (VAR_8 == 0)
   {
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     *VAR_10++ = *VAR_9++ + FUNC_0(0, 0, 0);
    for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++ + FUNC_0(*VAR_11++, 0, 0);
   }
   else
   {
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
     *VAR_10++ = *VAR_9++ + FUNC_0(0, *VAR_12++, 0);
    for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++)
     *VAR_10++ = *VAR_9++ + FUNC_0(*VAR_11++, *VAR_12++, *VAR_13++);
   }
   break;
  }
 }
}
